# Module 4
## Syllabus
- Power density of EM wave,
- Poynting vector theorem.
- Polarization of electromagnetic wave-linear
-  circular and elliptical polarisation.
- Uniform lossless transmission line - line parameters.
- Transmission line equations,
- Voltage and Current distribution of a line terminated with load.
- Reflection coefficient and VSWR.
- Derivation of input impedance of transmission line.
# Module 4
Created : 2024-05-12 08:42


## Contents
- 
### Transmission Line Losses
- Attenuation Loss

##### Attenuation Loss
- It happens due to absorption of signal in Tx line
- It happens in dielectric Material
#equation 
$$
L_{at} = 10 \log \frac{E_i - E_r}{E_t} \tag1 
$$
- We know $E \propto V^2$ => $E_i \propto V^2$ , $E_r \propto V^2$ , $E_t \propto V^2$ Substituting this in equation $(1)$ we get
$$
L_{at} = 10 \log \frac{\lvert {v_i}^2\lvert - \lvert {v_r}^2 \lvert}{\left  [\lvert {v_i}^2 \lvert - \lvert {v_i}^2 \lvert  \right] e^{-2 \alpha l}}    \tag2
$$
Where 
- $\alpha$ -> attenuation constant
- $l$ -> length of Tx line
$$
\begin{align}
L_{at} &= 10 \log\left[e^{2\alpha l} \right] \\
 &= 20 \alpha l \log{e} \\
 &= 8.686 \alpha l
\end{align}
$$
##### Reflection Loss
- It is present in transmission lines due to mismatch of transmission line ie, impedance is not matched with source 
## References
1. 