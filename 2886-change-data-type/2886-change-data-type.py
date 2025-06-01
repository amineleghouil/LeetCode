import pandas as pd

def changeDatatype(st: pd.DataFrame) -> pd.DataFrame:
    st['grade'] = st['grade'].astype(int)
    return st
