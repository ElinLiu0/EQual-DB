import psutil as pt
import numpy as np
import time
class SpeedTest:
    def __init__(self) -> None:
        pass
    def test(self):
        print("Starting Disk Performance Test Now...")
        wSpeed = []
        rSpeed = []
        for i in range(60):
            wSpeed.append(pt.disk_io_counters(perdisk=False,nowrap=True).read_bytes)
            rSpeed.append(pt.disk_io_counters(perdisk=False,nowrap=True).read_bytes)
            time.sleep(1)
        print("Testloop 1 min done!Result as shown below:\n")
        print("--------------------------------------------")
        print(f"Total Disk Array (Include Single) Read Speed : {round(np.mean(rSpeed) / 1024 / 1024 ,2)}MiB/s")
        print(f"Total Disk Array (Include Single) Write Speed : {round(np.mean(wSpeed) / 1024 / 1024 ,2)}MiB/s")
        print("Test Done!")