# GPIO LED Controller Kernel Module

A simple Linux kernel module that demonstrates basic GPIO control on embedded Linux systems (e.g., Raspberry Pi).  
It configures one GPIO pin as an **output** (LED) and another as an **input** (button), turns the LED on at module load, and prints the button state.

## Features
- Turns LED **ON** automatically when the module is loaded
- Turns LED **OFF** when the module is removed
- Reads and prints the current state of the button ("pressed" or "not pressed")
- Uses modern **gpiod** (GPIO descriptor) API instead of legacy integer-based GPIO

## Hardware Requirements
- Single-board computer with GPIO support (e.g., Raspberry Pi, Orange Pi, etc.)
- LED connected to GPIO **21** (with appropriate current-limiting resistor)
- Push button connected to GPIO **20** (with pull-up or pull-down resistor as required)

**GPIO pin mapping used in this driver:**
| Pin | GPIO | Direction | Purpose   |
|-----|------|-----------|-----------|
| 21  | 21   | Output    | LED       |
| 20  | 20   | Input     | Button    |

## Software Requirements
- Linux kernel with GPIO support
- Kernel headers installed (`linux-headers-$(uname -r)`)
- `gcc`, `make`, and root privileges

## Files in this project
├── main.c       # Kernel module source code

├── Makefile     # Build and installation instructions

└── README.md    # This file


## Building the Module

```bash
# 1. Make sure you're in the project directory
make

# 2. (Optional) Clean previous build artifacts
make clean
