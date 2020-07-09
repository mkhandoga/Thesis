#! /bin/bash
curpath=`readlink -f .`
prefix="lowptmu"
array_dir=(ptvarcone)
array_dir2=(CR_1_calib CR_2_calib)
array_ch=(Wep Wmup)
array_ch2=("e^{+}" "#mu^{+}" "e^{-}" "#mu^{+}" "#mu^{-}")
b=0
while [ $b -le 1 ]
do
i=0
while [ $i -le 1 ]
do
k=0
while [ $k -le 3 ]
do
	ch=${array_ch[$i]}
	ch2=${array_ch2[$i]}
	fix="${prefix}_${ch}"
	dir2=${array_dir2[$b]}
	samplepath="/sps/atlas/t/txu/work/5TeV_anal/Wanal/ptvar_scan/topo_20_rebin/Merge/ETA_0/iso0/$ch"
	subdir="$curpath/PTW_$k/${array_dir2[$b]}/$ch"
	echo $subdir
	mkdir -p $subdir
cat > $curpath/config << EOF
$subdir/inputlist
$ch2
PTW_$k/${array_dir2[$b]}/$ch
EOF
cat > $subdir/inputlist << EOF
+data_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso0/Wep/data.root
+ew_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso0/Wep/ew.root
+data_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso1/Wep/data.root
+ew_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso1/Wep/ew.root
+data_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso2/Wep/data.root
+ew_path: /sps/atlas/t/txu/work/lowmu/WZanal/13TeV_lep25ptW3000/PtWShift_ptcone20/Merge/$dir2/PTW_$k/iso2/Wep/ew.root
EOF

root -l -b -q compare.cpp
mv bkratio.txt $subdir
k=$(( k+1 ))
done
i=$(( i+1 ))
done
b=$(( b+1 ))
done

#/sps/atlas/t/txu/work/5TeV_anal/Wanal/MJ/MJfit/plot_space/Out_plotMJ/mu_MJ.root

