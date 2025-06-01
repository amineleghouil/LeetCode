import pandas as pd

def modifySalaryColumn(em: pd.DataFrame) -> pd.DataFrame:
    em['salary']*=2
    return em