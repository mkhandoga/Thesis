#! /bin/bash
curpath=`readlink -f .`
array_ch=(Wep Wmup Wem Wmum)
array_dir=(CR_1_calib CR_2_calib)
array_ptW=(15. 20. 25. 30. 100000.)
array_iso=(10. 20. 30. 40. 50.)
len_ptW=${#array_ptW[@]}
len_iso=${#array_iso[@]}
len_ch=${#array_ch[@]}
len_dir=${#array_dir[@]}
i=0
echo $len_iso
while [ $i -lt $len_ptW ]
do
workpath="$curpath/PTW_$i"
j=0
while [ $j -lt $(( len_iso-1 )) ]
do
lbin=${array_iso[$j]}
hbin=${array_iso[$(( j+1 ))]}
mkdir -p $workpath/dir_iso$j
cd $workpath/dir_iso$j
k=0
while [ $k -lt $len_ch ]
do
	ch=${array_ch[$k]}
	mkdir -p $workpath/Result/$ch
	mkdir -p $workpath/Output/$ch
	mkdir -p $workpath/FitPlot/$ch
	mkdir -p $workpath/Err/$ch
	mkdir -p $workpath/Effi/$ch
	samplepath="$curpath/../Merge"
	subdir=$workpath/dir_iso$j/$ch 
	echo $subdir
	mkdir -p $subdir
cd $subdir
cat > $subdir/tempfit << EOF
el/mu_Channel: el
isRooFit: false
scan_low: $lbin
scan_high: $hbin
data_iso_veryloose: $samplepath/loose/PTW_0/iso0/$ch/data.root
data_antiiso_veryloose: $samplepath/CR_1/PTW_$i/iso$j/$ch/data.root
EW_iso_veryloose: $samplepath/loose/PTW_0/iso0/$ch/ew.root
EW_antiiso_veryloose: $samplepath/CR_1/PTW_$i/iso$j/$ch/ew.root
data_iso_SR: $samplepath/sig/PTW_0/iso0/$ch/data.root
data_antiiso_SR: $samplepath/CR_2/PTW_$i/iso$j/$ch/data.root
EW_iso_SR: $samplepath/sig/PTW_0/iso0/$ch/ew.root
EW_antiiso_SR: $samplepath/CR_2/PTW_$i/iso$j/$ch/ew.root

EOF
fitMJ_5TeV tempfit
cp MJFitoutput/MJout_leppt.txt $workpath/Output/$ch/leppt_iso$j
cp MJFitoutput/MJout_pfo_met.txt $workpath/Output/$ch/pfo_met_iso$j
cp MJFitoutput/MJout_pfo_mT.txt $workpath/Output/$ch/pfo_mT_iso$j
cp MJFitoutput/MJFit_leppt.png $workpath/FitPlot/$ch/leppt_iso${j}.png
cp MJFitoutput/MJFit_pfo_met.png $workpath/FitPlot/$ch/met_iso${j}.png
cp MJFitoutput/MJFit_pfo_mT.png $workpath/FitPlot/$ch/mT_iso${j}.png
cp MJFitoutput/MJResult.txt $workpath/Result/$ch/dir_iso$j
cp MJFitoutput/MJerr.txt $workpath/Err/$ch/dir_iso$j
cp MJFitoutput/Effi.txt $workpath/Effi/$ch/dir_iso$j
k=$(( k+1 ))
done
j=$(( j+1 ))
done
i=$(( i+1 ))
done
cd $curpath

i=0
while [ $i -lt $len_ptW ]
do
workpath="$curpath/PTW_$i"
j=0
cd $workpath 
while [ $j -lt $len_ch ]
do
    ch=${array_ch[$j]}
	LiFit Result/$ch/	
	mv ScanFit/testFit.png ScanFit/${ch}.png
	mv ScanFit/ScanFit.txt ScanFit/${ch}.txt
j=$(( j+1 ))
done
i=$(( i+1 ))
done

cd $curpath

