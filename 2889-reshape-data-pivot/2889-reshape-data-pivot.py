import pandas as pd

def pivotTable(df: pd.DataFrame) -> pd.DataFrame:
    return df.pivot(index='month', columns='city', values='temperature')