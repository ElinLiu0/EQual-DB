import json
import platform as pf
import psutil as pt
import pynvml as pv
from tzlocal import get_localzone_name
def CurrentVersion():
    pv.nvmlInit()
    message = {
        "DB Version":"Beta Dev",
        "Location Time Zone":get_localzone_name(),
        "Python Engine Version":pf.python_version(),
        "Python Series":pf.python_version_tuple()[0],
        "Python Compiler":pf.python_compiler(),
        "System":pf.system(),
        "Platform":pf.machine(),
        "Basic GPU Driver Version":str(pv.nvmlSystemGetDriverVersion()).replace('b','').replace("'",""),
        "CUDA Version":str(pv.nvmlSystemGetCudaDriverVersion()).replace("0",""),
        "CUDA Devices Count":int(pv.nvmlDeviceGetCount()),
    }
    print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=False))
