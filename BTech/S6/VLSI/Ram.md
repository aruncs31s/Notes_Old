# Ram
- There are two types of RAM
	1. SRAM[^1]
	2. DRAM[^2]


[^1]: **SRAM** Static Random-Access Memory is a type of **volatile memory** used in computers and SRAM uses **latching circuitry** (specifically flip-flops) to store each bit of data. Unlike **dynamic random-access memory (DRAM)**, which requires periodic refreshing, ==SRAM retains its data as long as it has power==
[^2]: 


> [!NOTE] SRAM
>  **SRAM** exhibits **data remanence**, which means ==it retains data even after power is turned off==. Unlike dynamic RAM (DRAM), which requires periodic refreshing to maintain data integrity, SRAM uses latching circuitry (specifically flip-flops) to store each bit of data. As long as SRAM has power, it retains its stored information. However, ==once power is removed, the data is lost==. This property makes SRAM suitable for use in CPU caches and internal registers, where speed and reliability are essential


### SRAM
It is a type of Random Access Memory(RAM) that uses latching circuit[^3](flip flops) to store each bit. SRAM is volatile memory ==data is lost when power is removed==.
- Requires 6 transistors



![|400x300](https://upload.wikimedia.org/wikipedia/commons/thumb/3/31/SRAM_Cell_(6_Transistors).svg/800px-SRAM_Cell_(6_Transistors).svg.png)

Here
![WordLine](WordLine.md)
![BitLine](BitLine.md)

#working 
- If a 1 is created in one side, then automatically , a 0 is generated at other side due to inverters.
- If access transistors are off, then the cell holds the value 

 
#### SRAM Read Write Operation

![|400x300](https://upload.wikimedia.org/wikipedia/commons/thumb/3/31/SRAM_Cell_(6_Transistors).svg/800px-SRAM_Cell_(6_Transistors).svg.png)

Here 
  - **M1** and **M2** -> Inverter 1
  - **M3** and **M4** -> Inverter 2
  - **M5** and **M6** -> Access Transistors


- During Read/Write operation, access transistors(**M5** and **M6**  ) will be enabled and output/input will be available in bit line.

##### Read Operation
- First Assume that $Q = 1 \ and \  \overline Q = 0$
- Before starting read operation,  $BL \ and \  \overline {BL}$   are **precharged[^4] to VDD** 
- As per $Q\ \& \ \overline  Q$

| M1  | ON  | Inverter 1 |
| --- | --- | ---------- |
| M2  | OFF | Inverter 1 |
| M3  | OFF | Inverter 2 |
| M4  | ON  | Inverter 2 |
- To initiate read operation, ==**WL** is made high(1)== thus turning on $M5 \  \& \ M6$
	![](BTech/S6/VLSI/Pasted%20image%2020240418071342.png)
- Since $M5$ and $M1$ are on, $\overline {BL}$ will discharge through them. So Voltage at $\overline {BL}$ reduces
- Since $Q=1 \ \& \ BL=1$ , there is no current flow through $M6$ . So $BL$ voltage remains same

- $BL \ \& \ \overline {BL}$ are given to comparator. 
	- *Here $\ \ BL > \ \ \overline {BL}$ , So comparator ==gives output as 1== , and which is the value read from memory cell*
	- Insted, if the contents of cell was diffrent, ie $Q=0 \ \& \overline Q =1$ then upon initiating read operation, BL will discharge & $\overline {BL}$ remains the same. 
		- So $\overline BL \gt BL$ & ==output of comparator will be 0==


[^4]: Precharging in CMOS refers to a technique used in digital circuits to manage the charging and discharging of certain nodes or components. 


[^3]: **flipflops** and **latches** are circuits that have ==two stable states that can store state information==
