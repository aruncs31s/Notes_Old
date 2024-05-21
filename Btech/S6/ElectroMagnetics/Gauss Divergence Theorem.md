# Gauss Divergence Theorem

- It can be used to see the location of `source`[^4.1] and `sink`[^4.1]
- It explains rate of change of function with respect to position
- It is a flux density[^3], it explains how much flux is entering or leaving the source[^1] or sink[^2]
- If divergence[^4] is positive then that acting like a source and if negative it acting like a sink

[^4.1]: A source is a ==component or device that provides power to a circuit==. This could be a battery, a power supply, or any other device that generates electrical energy. In a circuit, the source is where the electrical energy begins its journey. It is the ==starting point for the flow of current==
[^4.2]: A sink is a ==component or device that consumes power from a circuit==

#statement

$$
\boxed{
\oint P.dS = \oint \overrightarrow \nabla . \overrightarrow P \ dV}
$$

> [!WARNING] Relation
> _surface intetegral of that function is = volume intetegral of [[Divergence|Divergence]] of that function_
> So it explains the relationship between surface intetegral and volume intetegral

#proof

1. Divergence of $\overrightarrow P$ can be calculated by the following expression

$Div(P) = \overrightarrow \nabla . \overrightarrow P = \underset{\Delta V  \to \infty}{\lim} \frac{\oint \overrightarrow P\, dS}{\Delta V}$

2. This calculation can be done by

$\underset{\Delta V \to \infty}{\lim}  \overrightarrow \nabla . \overrightarrow P \ \Delta V$ = $\underset{\Delta V  \to \infty}{\lim} \oint \overrightarrow P \ dS$

3. And says that ==Volume Integration of Divergence of P = Surface intetegral of Function P==

$$
\oint P.dS = \oint \overrightarrow \nabla . \overrightarrow P \ dV
$$

> [!important] Summary
> This proof comes form the basic definition of divergence as in stage 1 and it basically says that ==taking volume integral of divergence of a function is same as taking the surface integral of that function==

#uses

1. It is used in application of fluid mechanics
2. It is used to understand electromechanics
3. It is used to understand the flaw of fields (eg : [[Gravitational Field|Gravitational Fields]],[Electric Field](#electric%20fields)
4. Used in aerodynamics

#exampleProblem

- If $\overrightarrow F = xy \hat i_x \ + yz \hat i_y \ + zx \hat i_z$ and $a = 1 , b = 3 , c = 2$ then
  1. Determine $\int \overrightarrow \nabla . \overrightarrow F dV$
  2. Determine $\oint \overrightarrow F . \overrightarrow{dS}$
  3. Verify Divergence Theorem

1. Determining $\int \overrightarrow \nabla . \overrightarrow F dV$

$\overrightarrow \nabla . \overrightarrow F = \frac{\partial (Fx)}{\partial x} +  \frac{\partial (Fy)}{\partial y} +  \frac{\partial (Fz)}{\partial z}$

Which is
$= y +z + x$

- We have $a =1 , b=3 ,z =2$ which implies

$0 \textless x \textless 1$
$0 \textless y \textless 3$
$0 \textless z \textless 2$

- Therefore

$\int \overrightarrow \nabla . \overrightarrow F dV =  \int_{0}^{2} \int_{0}^{3} \int_{0}^{1} (y+z+x)dxdydz$

$=  \int_{0}^{2} \int_{0}^{3} [yx+z+\frac{x^2}{2}]_{0}^{1}dydz$

$=  \int_{0}^{2} \int_{0}^{3} (y+z+\frac{1}{2})dydz$

$=  \int_{0}^{2}  [{y^2 \over 2} +zy+\frac{1}{2}y]_{0}^{3}dz$

$=  \int_{0}^{2}  ({9\over 2} +3z+\frac{3}{2})dz$

$=  \int_{0}^{2}  ( 6+3z)dz$

$=    [ 6z+{3z^2 \over 2} ]_{0}^{2}$

$= 12 + 6 = 18$

$\int \overrightarrow \nabla . \overrightarrow F dV = 18$
