.PHONY: sketch_only sketch_blaze

all: sketch_only sketch_blaze

sketch_only:
	$(MAKE) -C sketch_only

sketch_blaze:
	$(MAKE) -C sketch_blaze
