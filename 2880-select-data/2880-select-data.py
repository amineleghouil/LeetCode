import pandas as pd

def selectData(st: pd.DataFrame) -> pd.DataFrame:
    return st[st['student_id']==101][['name','age']]