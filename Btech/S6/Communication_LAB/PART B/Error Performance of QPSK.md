
#### Steps
1.  Define Number of Input signals
2. Define `SNRdB`
3. Convert `SNRdB` to ==linear== scale
4. Initializes the Bit ==Error Rate (BER)== and ==Symbol Error Rate (SER) arrays with zeros.==
5. Generates two random binary sequences (`b1` , `b2`)
6. Maps the binary sequences to QPSK (`b1` ->  `I` , `b2` -> `Q` )
7. Combine the symbols and form `S` , `S = I + Q`
8. Calculates the noise variance `N0` based on the linear SNR values.
9. Loop
	1. Generate Additive White Gaussian Noise (AWGN) with variance N0(k)/2 for both real and imaginary parts.
	2. Add the noise to the QPSK symbols S to create the received signal `sig_Rx.`
```python
noise = sqrt(N0(k)/2)(randn(1,N) + 1j*randn(1,N));
sig_Rx = S + noise;
```
#### Code
```python
clc; clear all; close all;

N=1e6; % Number of bits transmited

SNRdB= 0:1:20; % SNR for simulation

SNRlin=10.^(SNRdB/10);

BER = zeros(1,length(SNRlin));% simulated BER

SER = zeros(1,length(SNRlin));% simulated SER

b1 = rand(1,N) > 0.5;

b2 = rand(1,N) > 0.5;

% QPSK symbol mapping

I = (2*b1) - 1;

Q = (2*b2) - 1;

S = I + 1j*Q;

N0 = 1./SNRlin; % Variance

for k = 1:length(SNRdB)

 noise = sqrt(N0(k)/2)*(randn(1,N) + 1j*randn(1,N)); % AWGN noise

 sig_Rx = S + noise; % Recived signal

 % For BER calculation

 sig_I = real(sig_Rx); % I component

 sig_Q = imag(sig_Rx); % Q component

 bld_I = sig_I > 0; % I decision

 bld_Q = sig_Q > 0; % Q decision

 b1_error = (bld_I ~= b1); % Inphase bit error

 b2_error = (bld_Q ~= b2); % Quadrature bit error

 Error_bit = sum(b1_error) + sum(b2_error); % Total bit error

 BER(k) = sum(Error_bit)/(2*N); % Simulated BER

 % For SER calculation

 error_symbol = or(b1_error, b2_error); % if bit in I or bit in Q either wrong than error

 SER(k) = sum(error_symbol)/N;

end

BER_theo = 2*qfunc(sqrt(2*SNRlin)); % Theoretical BER

SER_theo = 2*qfunc(sqrt(2*SNRlin)) - (qfunc(sqrt(2*SNRlin))).^2; % Theoretical SER

figure(1);

semilogy(SNRdB, BER_theo,'r-')

hold on

semilogy(SNRdB, BER,'k*')

xlabel('SNR[dB]')

ylabel('Bit Error Rate');

legend('Theoretical', 'Simulated');

title(['Probability of Bit Error for QPSK Modulation']);
figure(2);

semilogy(SNRdB, SER_theo,'r-')

hold on

semilogy(SNRdB, SER,'k*')

xlabel('SNR[dB]')

ylabel('Symbol Error Rate');

legend('Theoretical', 'Simulated');

title(['Probability of symbol Error for QPSK Modulation']);

grid on;

hold off;
grid on;

hold off;

```



```python
b1 = rand(1,N) > 0.5;
b2 = rand(1,N) > 0.5;
```
Generates two random binary sequences b1 and b2 of length N (each bit is either 0 or 1).
*`rand()` is used insted of randn()*


```python
%QPSK symbol mapping
I = (2*b1) - 1; 
Q = (2*b2) - 1;
S = I + 1j*Q;
```

Maps the binary sequences to Quadrature Phase Shift Keying (QPSK) symbols:
- I and Q components are created by mapping bits (0 to -1 and 1 to 1).
- S is the QPSK symbol formed by combining the ==I (In-phase) and Q (Quadrature)== components.


```python
N0 = 1./SNRlin; % Variance

```
Variance of Gaussion Distribution is $\sigma^2$ there for no `sqrt()` required

