#OBJS = BasePlusCommission_main.o CommissionEmployee.o
OBJS = BasePlusCommission_main.o CommissionEmployee.o BasePlusCommissionEmployee.o
CC = gcc

main:$(OBJS)
#   $(CC) $^ -o CommissionEmployee
	$(CC) $^ -o BasePlusCommissionEmployee

%.o:%.c
	$(CC) $^ -o $@

clean:
	$(RM) *.o  -r
