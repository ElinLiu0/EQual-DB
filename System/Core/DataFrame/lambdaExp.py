import pickle
import cudf as cf
import json
class lamdaExp:
    def __init__(self,expression,user) -> None:
        self.expression = expression
        self.user = user
    def doExp(self):
        QueryResult = None
        exec("QueryResult=expression")
        message = {
            "execCode":"OK",
            "responseData":QueryResult
        }
        print(json.dumps(message,indent=4,ensure_ascii=True,sort_keys=True))
        return f"{self.user} has executed the expression"
