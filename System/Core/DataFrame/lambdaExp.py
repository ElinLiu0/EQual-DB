import pickle
import cudf as cf
import json
class lamdaExp:
    def __init__(self,expression) -> None:
        self.expression = expression
    def doExp(self):
        QueryResult = None
        exec("QueryResult=expression")
        message = {
            "execCode":"OK",
            "responseData":QueryResult
        }
        return json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True)
