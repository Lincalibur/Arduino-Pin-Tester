import serial
import time

# Set up the serial connection (ensure COM3 is correct)
arduino = serial.Serial('COM3', 9600, timeout=1)  # Adjust if necessary
time.sleep(2)  # Wait for the Arduino to reset

def set_refresh_rate(rate):
    command = f"SET_REFRESH {rate}\n"
    arduino.write(command.encode())

def display_message(message):
    command = f"DISPLAY {message}\n"
    arduino.write(command.encode())

try:
    while True:
        # Example: Change the refresh rate every 5 seconds
        for rate in [1000, 500, 2000]:  # Refresh rates in milliseconds
            set_refresh_rate(rate)
            display_message(f"Rate: {rate} ms")  # Display the current rate
            time.sleep(5)  # Wait before changing again

except KeyboardInterrupt:
    print("Exiting...")
finally:
    arduino.close()
