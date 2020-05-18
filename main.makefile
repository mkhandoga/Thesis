ALL_FIGURE_NAMES=$(shell cat main.figlist)
ALL_FIGURES=$(ALL_FIGURE_NAMES:%=%.pdf)

allimages: $(ALL_FIGURES)
	@echo All images exist now. Use make -B to re-generate them.

FORCEREMAKE:

include $(ALL_FIGURE_NAMES:%=%.dep)

%.dep:
	mkdir -p "$(dir $@)"
	touch "$@" # will be filled later.

pgf-img/main-figure0.pdf: 
	lualatex -halt-on-error -interaction=batchmode -jobname="pgf-img/main-figure0" "\def\tikzexternalrealjob{main}\input{main}" || rm "pgf-img/main-figure0.pdf"

pgf-img/main-figure0.pdf: pgf-img/main-figure0.md5
