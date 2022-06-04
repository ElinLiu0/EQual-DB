import json
import platform as pf
import psutil as pt
import pynvml as pv
from tzlocal import get_localzone_name
def CurrentVersion():
    """
    Method with shown the EqualDB version info and relies on version.
    Params:
        None
    Returns:
        DB Version
        Location Time Zone
        Python Series:Which will return your runtime is Py2 or Py3
        Python Compiler:returns that the basic compiler of your Python Engine,as : gcc
        System:return your system kernel,but that seems only can be return Linux
        Platform:return your system architecture,whether RSIC-V,ARM or traditional X86
        Basic GPU Driver Version:The GPU Driver version returns.
        CUDA Version:return your locally CUDA™ Driver version info
        CUDA Devices Count:Which return the GPU Count(None Dead Devices)
    """
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
    return json.dumps(message,ensure_ascii=True,sort_keys=False)
