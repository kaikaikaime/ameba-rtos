
include $(MAKE_INCLUDE_GEN)

.PHONY: all clean

#*****************************************************************************#
#                               VARIABLES	                              #
#*****************************************************************************#
COMPONENT := GUI_X

COMPONENT_CLEAN := GUI_X
COMPONENT_CLEAN += GUI

#*****************************************************************************#
#                               Object FILE LIST                              #
#*****************************************************************************#
OBJS = 

#*****************************************************************************#
#                        RULES TO GENERATE TARGETS                            #
#*****************************************************************************#

# Define the Rules to build the core targets
$(foreach n, $(COMPONENT), $(eval $(call GenerateTargets, $(n),all)))

all: CORE_TARGETS $(addsuffix -all, $(COMPONENT))

#*****************************************************************************#
#              GENERATE OBJECT FILE 
#*****************************************************************************#
CORE_TARGETS: $(OBJS)

	


#*****************************************************************************#
#                        RULES TO CLEAN TARGETS                               #
#*****************************************************************************#
$(foreach n, $(COMPONENT_CLEAN), $(eval $(call GenerateTargets,$(n),clean)))

clean: $(addsuffix -clean, $(COMPONENT_CLEAN))

	



