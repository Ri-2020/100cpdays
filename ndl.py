import sys
import os
import psycopg2
import math

database = sys.argv[1]
user = os.environ.get('PGUSER')
password = os.environ.get('PGPASSWORD')
host = os.environ.get('PGHOST')
port = os.environ.get('PGPORT')

def connectDb():
    try:
        return psycopg2.connect(
            database=database ,
            user=user,
            password=password,
            host=host,
            port=port,
        )
    except:
        False

conn = connectDb()
data = None
with open('date.txt', 'r') as file:
    data = file.read()
    

if conn:
    cursor = conn.cursor()
    sql = '''
        select referees.name from 
        matches join 
        match_referees 
        on matches.match_num = match_referees.match_num 
        join referees 
        on match_referees.referee = referees.referee_id
        where matches.match_date =''' + f"'{data}'"
    # print(sql)
    cursor.execute(sql,)
    isbns = cursor.fetchone()
    
    # print(isbns)
    
    if isbns is not None:
        for i in range(len(isbns)):
            temp = isbns[i]
            temp = temp.split()
            s = ""
            for j in range(len(temp) -1):
                s = s+ (f"{temp[j][0]}. ")
            print(temp[-1] + " "+ s)
    
   
    # print(round(math.cos(score*10*(math.pi/180)),2))

    cursor.close()
    conn.close()
