# Hello World Linux Kernel Module

A minimal "Hello World" loadable kernel module (LKM) for learning Linux kernel programming.  
When loaded, it prints **"HELLO KERNEL BUDDY"** to the kernel log.  
When unloaded, it prints **"BYE KERNEL"**.

Perfect first project to understand kernel module basics: init/exit functions, `printk`, module metadata, and the build/load process.

## Features
- Simple initialization and cleanup functions
- Uses modern kernel module macros (`MODULE_LICENSE`, `MODULE_AUTHOR`, etc.)
- No hardware or complex logic — pure hello world

## Requirements
- Linux system (tested on Raspberry Pi, Ubuntu, Debian-based distros, etc.)
- Kernel headers installed matching your running kernel:
  ```bash
  sudo apt update
  sudo apt install linux-headers-$(uname -r)     # Debian/Ubuntu/Raspberry Pi OS

## Project Files
├── main.c       # The kernel module source code

├── Makefile     # Build, clean, install, and log helpers

└── README.md    # This file

## Usage

1. Load the module → see "HELLO KERNEL BUDDY" in logs
sudo make install
 or manually: sudo insmod main.ko

 2. Check kernel messages (last 20 lines)
sudo make log
 or: dmesg | tail -20
 or: sudo journalctl -k --since "5 minutes ago"   (on systemd systems)

 Expected output when loading:
 [12345.678901] HELLO KERNEL BUDDY

 3. Unload the module → see "BYE KERNEL"
sudo make uninstall
 or manually: sudo rmmod main

 Quick log check again
sudo make log
