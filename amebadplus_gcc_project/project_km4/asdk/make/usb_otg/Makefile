
include $(MAKE_INCLUDE_GEN)

.PHONY: all clean

#*****************************************************************************#
#                               VARIABLES	                              #
#*****************************************************************************#
COMPONENT := device
COMPONENT_CLEAN := device

#*****************************************************************************#
#                        RULES TO GENERATE TARGETS                            #
#*****************************************************************************#

# Define the Rules to build the core targets
$(foreach n, $(COMPONENT), $(eval $(call GenerateTargets, $(n),all)))

all: $(addsuffix -all, $(COMPONENT))
	
#*****************************************************************************#
#                        RULES TO CLEAN TARGETS                               #
#*****************************************************************************#
$(foreach n, $(COMPONENT_CLEAN), $(eval $(call GenerateTargets,$(n),clean)))

clean: $(addsuffix -clean, $(COMPONENT_CLEAN))

-include $(DEPS)

