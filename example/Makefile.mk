-include Config.mk

NAME_MODULE = $(EXAMPLE_DIR)/bin/example
NAME_STATIC_MODULE = libak.a
OBJDIR = $(EXAMPLE_DIR)/obj

CFLAGS += -I./$(EXAMPLE_DIR)/include

OBJ += 	$(OBJDIR)/main.o \
		$(OBJDIR)/task_list.o \
		$(OBJDIR)/task_1.o \
		$(OBJDIR)/task_2.o \
		$(OBJDIR)/task_3.o \
		$(OBJDIR)/task_4.o \
		$(OBJDIR)/task_5.o \
		$(OBJDIR)/task_6.o \
		$(OBJDIR)/task_7.o \
		$(OBJDIR)/speedtest.o \
 		$(OBJDIR)/ping.o 

all: $(NAME_MODULE)

vpath %.c ./$(EXAMPLE_DIR)/src/
vpath %.h ./$(EXAMPLE_DIR)/include/

$(OBJDIR)/%.o: %.c
	@echo CC 	$^
	@$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS)

$(NAME_MODULE): $(OBJ)
	@echo ---------- START LINK EXAMPLE ----------
	@echo CC 	$^ -o $@
	@$(CC) -o $@ $^ $(OBJ_DIR)/$(NAME_STATIC_MODULE) $(CFLAGS) $(LDFLAGS)
	
clean:
	@echo rm -rf $(EXAMPLE_DIR)/$(OBJ)
	@rm -rf $(OBJ)
	@rm -rf $(NAME_MODULE)
	@rm -rf $(EXAMPLE_DIR)/log/records.log