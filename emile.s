.name "Zork sniper"
.comment "Dsl"


start : ld %191366143, r3
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0
sti r3, %-256, %0

ld %191365633, r2
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0
sti r2, %256, %0

fork %20
l2:		sti r1, %:live, %1

live:	live %1
		fork %:start
		and r1, %0, r1
		zjmp %:l2


################################################

#sti r1, %0, %400 # 0b 68 01 00 00 01 90 # 191365376 102400
## Start cpy
#ld %191365376, r2
#ld %102411, r3
#sti r2, %0, %404 # 0b 68 02 00 00 01 94
#sti r3, %0, %405 # 0b 68 03 00 00 01 98
## end cpy
#ld %1744961536, r4
#ld %26479464, r5
#ld %50331649, r6
#ld %2550136832, r7
#sti r4, %0, %416
#sti r5, %0, %417
#sti r6, %0, %418
#sti r7, %0, %419


# 0b680100
# 0001900b
# 68020000
# 01940b68
# 03000001
# 98000000