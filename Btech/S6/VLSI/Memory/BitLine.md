# **Bit Line**
Bit Line is a signal line in [SRAM](Ram.md#SRAM) that connects to the storage nodes of memory cells within a specific row ,
	- During a read operation, the stored data is accessed by activating the appropriate word line and ==sensing the voltage level on the bit line to determine whether it represents a logic high or low==.
	- During a write operation, the ==bit line is used to write data into the memory cells==. The desired data is placed on the bit line, and the appropriate word line is activated to store the data in the selected memory cell.
### While Reading
While read operation, the contents of selscted word will be available on bit lines.