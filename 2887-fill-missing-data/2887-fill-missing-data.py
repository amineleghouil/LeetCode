import pandas as pd

def fillMissingValues(pr: pd.DataFrame) -> pd.DataFrame:
    pr["quantity"]=pr["quantity"].fillna(0)
    return pr