---
id: Module 1 Problems
aliases: 
tags:
---

## Schaum's Problems

2. [x] Find the $\overrightarrow A$ Directed from $(2,-4,1)$ to $(0,-2,0)$ in cartesian coordinate and find the unit vector along $\overrightarrow A$ [[#^e0abad|Answer]]
3. [ ] Find the distance between $(5,3\pi,0)$ and $(5,\frac{\pi}{2},10)$ in cylindrical coordinate system
4. [ ] Show that $A=4a_{x} - 2a_{y}-a_z$ and $B=a_{x}+ 4a_{y} -4a_{z}$ are perpendicular 
<details><summary>Hint</summary>
The dot product will be zero if two vectors are perpendicular
</details>
5. [ ] Given $A = 2a_{x}+4a_{y}$ and $B=6a_{y}-4a_{z}$, find the smaller angle between them using 
	1. [ ] Cross Product 
	2. [ ] dot product 
6. [ ] Given $F=(y-1)a_x+2xa_y$ find the given vector at $(2,2,1)$ and its projection on B, where $B=5a_{x}- a_{y}+ 2a_z$
7. [ ] 
##### Answers

2.  ![[Module 1 Sample Problem 2.excalidraw]]^e0abad

---

3. First we have to convert the convert the coordinates into cartesian
   [[Co-ordinate Systems#^9663b2]]

```js
convert = (rho,phi,z) => {
let cartesianCoordinate = []
const TransformMatrix = [
				[Math.cos(phi),-1*Math.sin(phi),0],
				[Math.sin(phi),Math.cos(phi), 0],
				[ 0       ,      0 ,          1]
						]
const cylindricalCoordinate = [rho, phi , z]
for (let i = 0; i < 3; i++) {
		let sum = 0;
		for (let j = 0; j < 3; j++) {
			sum += TransformMatrix[i][j] * cylindricalCoordinate[j]; 
				} 
 cartesianCoordinate.push(sum); 
	 }
	 return cartesianCoordinate;
 }
 let cartesianOne = convert(5,1.5*Math.PI,0 );
 const phiOne = 1.5*Math.PI ;
 const phiTwo = .5*Math.PI;
 console.log("rhoOne= " + 5);
 console.log("phiOne = "+phiOne );
 console.log("cos phiOne = "+Math.cos(phiOne) );
 console.log("x_1 = "+ 5 * Math.cos(phiOne) );
 
 console.log("rhoTwo= " + 5);
 console.log("phiTwo = "+phiTwo );
 console.log("cos phiTwo  = "+Math.cos(phiTwo) );
 console.log("x_2 = "+ 5 * Math.cos(phiTwo) );
 let cartesianTwo = convert(5,.5*Math.PI,10 ); 
 console.log("Cartesian Co-ordinate 1 = " +convert(5,1.5*Math.PI,0 ))
 console.log("Cartesian Co-ordinate 2 = " + convert(5,.5*Math.PI,10 ))
distance = (POne,PTwo)=>{
	for (let i = 0; i< 3 ; ++i){
	PTwo[i] -= POne[i];
	}
	return PTwo ;
}
console.log("Distance = " + distance(cartesianOne,cartesianTwo))

```

1.

## Problems

1. [ ] Given $A = 4a_{y}+ 10a_z$ and $B=2a_{x} + 3a_{y}$ Find the projection of $A$ on $B$
2. [ ] Given $A=(10/\sqrt2)(a_x +a_z)$ and $B=3(a_y a_z)$, express the projection of $B$ on $A$ as a vector in the direction of A.

# Answers

1.
2. Ans. 1.50(a_x + a_z)
