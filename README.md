## Laser-Based Wireless Communication

# Overview

This project explores the simulation of photonic communication in Wi-Fi networks, focusing on varying frequency and phase differences to transmit data. By leveraging laser technology, we aim to simulate and understand the nuances of optical wireless communication, including data encoding, transmission, and reception processes.

# Methodology

Initial Synchronization

A long, high signal is used for initial synchronization to establish a baseline connection between the transmitter and receiver. This step ensures that both ends of the communication are aligned before data transfer begins.

# Data Transmission

Data is transmitted using a method of discrete high and low signals:
	•	A single high-low signal pair represents the number 1, encoded as the letter ‘A’.
	•	Two consecutive high-low signal pairs represent the number 2, encoded as the letter ‘B’.
	•	This pattern continues for subsequent letters, allowing for alphanumeric data encoding.

# Signal Encoding and Decoding

The transmitter sends data by modulating the laser signal’s frequency and phase, which is then decoded on the receiving end based on the high-low signal patterns.

# Challenges Faced
	1.	Signal Transition Delays: There were occasional delays in the circuit when transitioning between high and low signal values, affecting the data integrity.
	2.	External Light Interference: Ambient lighting and other environmental factors introduced noise, making it challenging to maintain a consistent signal.
	3.	Threshold Setting: Determining an appropriate threshold value for signal detection was crucial to distinguish between high and low signals accurately.
	4.	Initial Synchronization: Establishing a reliable synchronization at the beginning of the communication posed difficulties, particularly in ensuring a stable connection.

# Future Prospects
	•	Integration of Multiple Lasers: Introducing multiple lasers could enhance data transmission rates and improve redundancy, leading to more robust communication.
	•	Exploration of Frequency Bands: By utilizing different laser frequencies, the communication time can be reduced, and data transfer efficiency can be increased.
	•	Advanced Modulation Techniques: Implementing advanced modulation schemes could further optimize the communication system, enabling more complex data transmission.

# Conclusion

This project demonstrates the potential of laser-based wireless communication as a viable alternative to traditional radio-frequency methods. By addressing the challenges and exploring future enhancements, the project paves the way for more efficient and reliable photonic communication systems, with inclusion of multiple lasers, advanced modulation techniques, and optimized frequency bands.

# Code and Documentation

For a detailed analysis and technical documentation and the **code**, please refer to the linked paper: [Laser-Based Wireless Communication Paper](https://iitgnacin-my.sharepoint.com/:b:/g/personal/23110334_iitgn_ac_in/ERaP6oIndxJFivPPv5zZU1oB4PGTzJmV_qZ0f7bsHcz34Q?e=xuISmt)

