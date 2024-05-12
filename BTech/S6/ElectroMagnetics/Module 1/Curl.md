# Curl
*Curl of function explains rotation of a body at different position , means torque at the position*

- If `Curl` of a function is ==greater than 0  then body will rotate in Anti-Clockwise direction==
- If `Curl` of a function is ==less than 0 then the body will rotate in  Clockwise direction==

>$$
>Curl \ \overrightarrow A = \nabla \times \overrightarrow A = \lim_{\Delta S \to 0}  \left( \frac {\oint \overrightarrow A . dl}{ \Delta S }  \right) 
>$$
>Where $\Delta S$ is the area bounded by the curve $L$

- A vector is said to be irrotational if its curl is $0$


$$
 \nabla \times \overrightarrow A = \begin{bmatrix} \hat a_{x} & \hat a_{y} & \hat a_{z} \\ \frac{\partial}{\partial x} & \frac{\partial }{\partial y}& \frac{\partial }{\partial z} \\ A_x & A_y & A_z \end{bmatrix} \tag{Cartesian}
$$
$$
 \nabla \times \overrightarrow A = \begin{bmatrix} \hat a_{\rho} & \rho \hat a_{\phi} & \hat a_{z} \\ \frac{\partial}{\partial \rho} & \frac{\partial }{\partial \phi}& \frac{\partial }{\partial z} \\ A_\rho & \rho A_\phi & A_z \end{bmatrix} \tag{Cylindrical}
$$
$$
 \nabla \times \overrightarrow A = \begin{bmatrix} \hat a_{r} & r\hat a_{\theta} & r\sin \theta\hat a_{z} \\ \frac{\partial}{\partial r} & \frac{\partial }{\partial \theta}& \frac{\partial }{\partial \phi} \\ A_\rho & r A_\theta & r \sin \theta A_\phi \end{bmatrix} \tag{Spherical}
$$
$$

$$
