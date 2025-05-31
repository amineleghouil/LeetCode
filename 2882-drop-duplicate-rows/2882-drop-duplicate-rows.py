import pandas as pd

def dropDuplicateEmails(cs: pd.DataFrame) -> pd.DataFrame:
    return cs.drop_duplicates("email")