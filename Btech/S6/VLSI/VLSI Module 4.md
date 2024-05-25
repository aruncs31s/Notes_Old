# Arithmetic circuits
- Adders:
	- Static adder,
	- Carry-Bypass adder,
	- Linear Carry-Select adder
	- Square-root carry-select adder.
- Multipliers: Array multiplier


### Adders

![[Adders.canvas|Adders]]

Adders can be optimized in either the `logic level` or `hardware` level 

> [!INFO] Key Terms
> - Carry propagation Delay : - Carry propagation delay of a full adder is the time taken by it to produce the output carry bit.
> - Sum propagation delay of a full adder is the time taken by it to produce the output sum bit.
> 
> 

#### Ripple Carry Adder
![[Ripple Carry Adder Drawing|400x200]]
- In this adder the inputs are $A0,A1,A2,A3$ and $B0,B1,B2,B3$
- $S0,S1,S2,S3$ is the outputs 
$$
S0 = A(+)B(+)Cin
$$

- $Cin$ is the Carr_in from an external circuit or similar adder 

#disadvantages 
- Too much delay
>[!INFO] Worst Case Delay 
>Worst case delay of a ripple carry adder is the time after which the output sum bit and carry bit becomes available from the last full adder
>When the input is $1110 + 1110$ then it the last adder have to wait the all other adder to finish computing and the carry have to pass through all the adders 

1. Propagate : Carry is calculated at the current stage and ==$C_{in}$ is  propagated to next stage==
$$
Propagate = A \oplus B
$$
2. Generate : If Generate = 1 we have to find the Carry

$$
Generate = AB
$$
3. Delete : 
$$
Delete =  {\bar A \bar B} 
$$

### Carry Bypass adder

![](Pasted%20image%2020240417192854.png)
if $P_0P_1P_2P_3 = BP =1$ carry is directly passed to ==next block== .ie , $C_{o,3}= C_{i}= 0$ when $BP = 1$

-  When BP-1, the incoming carry is forwarded  immediately to the next block through a bypass transistor *Mb*. Hence the name carry bypass adder or carry skip adder.  
- If BP 1, Carry is obtained by normal route.  
- To compute the delay of N-bit adder, assume that the total adder is divided into N/M equal length bypass stages, each of which contains M bits. 
- N=16,M=4


$$
T{p}= T{setup} + MT{carry} + (N/M-1) T{bypass}+(M-1)TCarry+ T{sum}

$$
﻿  
> - $T{setp}$ = time to create generate & propagate signal 
> - $T{carry}$ = Propagation delay through single bit
> - $T{bypass}$ =propagation delay through bypass multiplexer of a single stage.  
> - $T{sum}$=time to generate the sum of final stage  
>- $T_p$ = Total propagation time  :  
