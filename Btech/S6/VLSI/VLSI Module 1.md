---
id: VLSI Module 1
aliases: []
tags: []
mindmap-plugin: basic
---

# VLSI Design methodologies

## Contents ^3c942261-3e8a-8e68

- Prerequisites
  - 1.  [[MOSFET]]
  - 2.

## Syllabus

- [[#Introduction]]:
  - [[#^xyz|Moore’s law]]
  - ASIC design
    - Full custom ASIC
    - Standard cell based ASICs
    - Gate array based ASICs
  - SoCs
  - FPGA devices
  - ASIC and FPGA Design flows
  - Top-Down and Bottom-Up design methodologies.
  - Logical and Physical design.
  - Speed power and area considerations in VLSI design

### Introduction

Typically, the required computational and information processing power of these applications is the driving force for the fast development of this field. This trend towards portable, distributed system architectures is one of the main driving forces for system integration, even though it does not preclude a concurrent and equally important trend towards centralized, highly powerful information systems such as those required for network computing (NC) and video services.
**The level of integration as measured by the number of logic gates** in a monolithic chip has been steadily rising for almost three decades

#advantages

- Less area/volume and therefore, compactness
- Less power consumption

* Less testing requirements at system level
* Higher reliability, mainly due to improved on-chip interconnects
* Higher speed, due to significantly reduced interconnection length
* Significant cost savings

Digital CMOS (Complementary Metal Oxide Semiconductor) integrated circuits(ICs) have been the driving 'force behind Very Large Scale Integration (VLSI) for high-performance computing and other scientific and engineering application

| Era                                  | Date | Complexity     |
| ------------------------------------ | ---- | -------------- |
| Single Transistor                    | 1958 | <1             |
| Unit Logic(one gate)                 | 1960 | 1              |
| Multi-function                       | 1962 | 2 -4           |
| Complex function                     | 1964 | 5 - 20         |
| Medium Scale Integration (MSI)       | 1967 | 20 - 200       |
| Large Scale Integration (LSI)        | 1972 | 200 - 2,000    |
| Very Large Scale Integration (VLSI)  | 1978 | 2,000 - 20,000 |
| Ultra Large Scale Integration (ULSI) | 1989 | 20,000 - ?     |

> [!NOTE] Moore's Law
> The number of transistors on a microchip doubles about every two years, made by Intel co-founder Gordon Moore in 1965.
> ![Mores Law](https://upload.wikimedia.org/wikipedia/commons/thumb/0/00/Moore%27s_Law_Transistor_Count_1970-2020.png/800px-Moore%27s_Law_Transistor_Count_1970-2020.png)
> Level of integration versus time for memory chips and logic chips.
> ^xyz

#### ASIC

An application-specific integrated circuit is an integrated circuit (IC) that’s custom-designed for a particular task or application . Unlike FPGA boards that can be programmed to meet a variety of use case requirements after manufacturing, ==ASIC designs are tailored early in the design process to address specific needs==. The two primary ASIC design methods are gate-array and full-custom. 
- ASIC may contain a very large part of the electronics needed on a single integrated circuit 
#example 
1. Chip for toy bear
2. Chip for satellite




 ![[Pasted image 20240524184406.png]]

## References

- 1. [Ktu Syllabus]()
