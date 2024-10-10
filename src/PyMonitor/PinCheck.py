import serial
import time

# Set the correct COM port and baud rate
SERIAL_PORT = 'COM3'  # Update this to your Arduino's serial port
BAUD_RATE = 9600

def main():
    # Initialize the serial connection
    with serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1) as ser:
        time.sleep(2)  # Give time for the connection to establish

        while True:
            if ser.in_waiting > 0:  # Check if there's data available
                line = ser.readline().decode('utf-8').rstrip()  # Read a line from the serial port
                print(f"Received from Arduino: {line}")  # Print the received line

if __name__ == '__main__':
    main()
