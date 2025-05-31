import pandas as pd

def createBonusColumn(em: pd.DataFrame) -> pd.DataFrame:
    em['bonus']=em['salary']*2
    return em