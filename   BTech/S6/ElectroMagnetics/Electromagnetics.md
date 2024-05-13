<h1 align="center">ElectroMagnetics Theory</h1>

## Contents
- [Text](https://drive.google.com/file/d/1lFXMNLvuTDy1JrL4NnVrQtpwg9xTWLt3/view?usp=drive_link)
- [[  BTech/S6/ElectroMagnetics/Module 1|Module 1]] 
	- [[Module 1 Problems]]
- [[  BTech/S6/ElectroMagnetics/Module 2|Module 2]]
- [[  BTech/S6/ElectroMagnetics/Module 3|Module 3]]
- [[  BTech/ElectroMagnetics/Module 4|Module 4]]
- [[PYQs]]

> [!NOTE] Symbols
> 1. $\Delta$ = the vector differential operator
> 2. D = the electric flux density
> 3. B = the magnetic flux density
> 4. E = the electric field intensity
> 5. H = the magnetic field intensity
> 6. $\rho$v = the volume charge density
> 7. J = the current density

#### Important Topics
- Module 1 
	- Point/vector transformation
	- [[coulomb's law]]
	- Finding Electric Field Intensity
- Module 2
	- Capacitance
	- Inductance of coaxial and two wire transmission line
	- Boundary conditions
- Module 3
	- Propagation of EM wave in different mdedium
- Module 4
	- Finding Line parameters
	- Reflection and VSWR
- Module 5
	- Problems using Smith chart

#### Important Laws
- [Coulomb's law](coulomb's%20law.md)


```python
# by Copilot
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle

def E(q, r0, x, y):
    """Return the electric field vector E=(Ex, Ey) due to charge q at r0."""
    den = np.hypot(x - r0[0], y - r0[1]) ** 3
    return q * (x - r0[0]) / den, q * (y - r0[1]) / den

# Grid of x, y points
nx, ny = 64, 64
x = np.linspace(-2, 2, nx)
y = np.linspace(-2, 2, ny)
X, Y = np.meshgrid(x, y)

# Create a multipole with nq charges of alternating sign, equally spaced on the unit circle.
nq = 8
charges = []
for i in range(nq):
    q = (-1) ** i
    angle = 2 * np.pi * i / nq
    charges.append((q, (np.cos(angle), np.sin(angle))))

# Calculate the electric field vector components (Ex, Ey)
Ex, Ey = np.zeros((ny, nx)), np.zeros((ny, nx))
for charge in charges:
    ex, ey = E(*charge, x=X, y=Y)
    Ex += ex
    Ey += ey

# Create the plot
fig, ax = plt.subplots()
color = 2 * np.log(np.hypot(Ex, Ey))
ax.streamplot(x, y, Ex, Ey, color=color, linewidth=1, cmap=plt.cm.inferno, density=2, arrowstyle='->', arrowsize=1.5)

# Add filled circles for the charges themselves
charge_colors = {True: '#aa0000', False: '#0000aa'}
for q, pos in charges:
    ax.add_artist(Circle(pos, 0.05, color=charge_colors[q > 0]))

ax.set_xlabel('$x$')
ax.set_ylabel('$y$')
ax.set_xlim(-2, 2)
ax.set_ylim(-2, 2)
ax.set_aspect('equal')

plt.show()

```





## Todos

```dataview
List
From  #todo 
```
