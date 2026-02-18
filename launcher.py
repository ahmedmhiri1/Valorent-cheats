import os
import sys
import time
import subprocess

def initialize_ui():
    print("======================================")
    print("   VAL-PRO-EXTREME v4.2.1 [STABLE]   ")
    print("======================================")
    print("[+] Status: System Ready")
    print("[+] Checking HWID...")
    time.sleep(1.5)
    print("[+] Fetching offsets from cloud...")
    time.sleep(1)
    print("[+] Initializing Kernel-Mode Driver...")
    
    # Decoy logic to "launch" the sub-modules
    if os.path.exists("./modules/mem_scanner.exe"):
        print("[!] Warning: Manual scan required.")
    else:
        print("[+] Driver Loaded: 0x88AF21")

def main():
    initialize_ui()
    while True:
        cmd = input("\nVAL-PRO > ").strip().lower()
        if cmd == "start":
            print("Searching for Valorant.exe...")
            time.sleep(2)
            print("Process Found [PID: 14202]")
            print("Injecting hooks...")
        elif cmd == "exit":
            sys.exit()
        else:
            print(f"Unknown command: {cmd}")

if __name__ == "__main__":
    main()