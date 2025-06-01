import pandas as pd

def dropMissingData(st: pd.DataFrame) -> pd.DataFrame:
    return st.dropna(subset=["name"])