import pandas as pd

def market_analysis(users: pd.DataFrame, orders: pd.DataFrame, items: pd.DataFrame) -> pd.DataFrame:

    orders = (orders[orders.order_date.between('2019-01-01', '2019-12-31')]
                    .rename(columns={'order_id': 'orders_in_2019'}))

    users = users.rename(columns={'user_id': 'buyer_id'})

    return (orders.groupby('buyer_id').count().reset_index()
                  .merge(users, how = 'right')
                  .fillna(0).iloc[:,[0,5,1]])