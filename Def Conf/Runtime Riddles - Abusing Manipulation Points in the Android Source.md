---
By: Laurie Kirk
defcon: "31"
---
# Runtime Riddles - Abusing Manipulation Points in the Android Source
Created : 2024-04-10 01:00

![[Def Conf/Pasted image 20240410012134.png]]
## Contents
*Android runtime Transforms executables into runtime objects , loads and executes android apps*
![[Def Conf/Pasted image 20240410010432.png]]
```java
Log.e("ARTful","Starting app");
Button button = new Button(this);
button.setText("Click Me");
Log.e("ARTful","Created new button");
```
![[Def Conf/Pasted image 20240410010539.png]]
### Agenda 
- Manipulate the Android 13 runtime 
- Replace the Android APIs in apps with hidden *mallicious* codes 
-  Provide new open-source tool to the community
- Defeat reverse engineers 
- 
![[Def Conf/Pasted image 20240410010609.png]]
### Dynamic Obfuscation Goals 
- Load dynamic code
- Prevent static analysis 
- Its to load aditional code into android runtime
- Trying to defeat static analysis of android application

- Methods used for dynamic code loading
![[Def Conf/Pasted image 20240410010908.png]]
- `DexClassLoader`
- `PathClassLoader`
- `ClassLoader.loadClass`
found inside of android framework

[[Dalvik]] ? executable

- android app decompiler jdex

- Hooks method while running 
	- Medusa 
	- Frida

#### Manipulating ANdroid ART
	 ![[Def Conf/Pasted image 20240410011325.png]]
ART takes codes from the disk and transforms apps into runtime objects 
ART is responsible for taking binaries that are defined on disk and parsing out all of the code inside of those into actual android runtime environment , mapping those into memory and making the relevent potions executable and actually executing the entry point of the perticular excutable binary

## References
1. https://youtu.be/Bq7Z3X4xwCE?si=hmZbtz21c9uyO53R