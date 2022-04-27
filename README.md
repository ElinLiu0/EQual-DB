This is the Beta Test branch of EQualDB(Renamed from JessiseDB).

You can point out whatever issuse that you find out.

Also you can join my porject to help me improve EQualDB Better.

- Current Update History
  ----------------------

  - 2022/2/16  21:14 : Fix the datatransaction miss during writing recover .rc file
  - 2022/2/16 17:46 : Fix the dataframe stroage formation. From begining string json files into Binary File
  - 2022/2/14 : Fix the user login logic and all the Function are now intergreted in to one Shell.py File
  - 2022/2/11 : Upgrade the selection function files in DatabaseOption called ShowSelect.py
  - 2022/2/17 : Fix the ''SHOW DATAFRAMES'' functions error with frame encoding catch
  - 2022/2/18 16:05 : Redesigned file strcuture as same as Windows Version yet and make a bin file of JessiseDB which means you can add JessiseDB into PATH.
  - 2022/2/23 :
    - Add "SaveCache" Function to help user to save temp dataframe into the format that you want.During you using Select Functions,Jessise DB Will automaticlly saving the datastream rendered by Selectfuntion and saving it into a global variables called : "caching_dataframe".Yet if you wanna export this stream into a real file that you want to export,then you can use "SaveCache" function to saving this datastream into whatever you want.
    - Refixing datastorage stream into Pandas to_pickle() function to sort of improving the data security.Will be add RSA Algorthim to improving more!
    - Update the current version into v0.5!
  - 2022/2/24:
    - Redefining the DataRecover Function Authority Limit,both the user got Admin and sudo can do Recover Operation,yet can not.
    - Remakig Bin File
    - Fixing the SaveCache function -> ouput to xls format error,replace as .xlsx
  - 2022/2/28:
    - Add I/O function : Insert,Append,Drop(Cols/Rows)
    - Split two function : Export/Save Cache,to allow user do more option on caching datastream
    - Remaking bin file
  - 2022/3/???
    - Add Logs For Main Process Crashing Recheck
    - Using AI Document Plugin to create Document
  - 2022/4/14
    - Rechanging All command into lower case.
  - 2022/4/16
    - Fetching New File  Strcture,in utils,you can find buildNuitka.sh to use Nuitka Moudle to Build JessiseDB into bin file.Default output path is build folder at project root
    - Add Re Authorization and Drop User function
    - Rewriting the Select class,only now avaliable function is normally shown.Will be add Mathmetical Selection and lambda express selection in Future.
  - 2022/4/20
    - Rewrtie all response in main logic into json type.
    - Delete CPU Branch and will only focus on GPU comupting and storage.
    - Rename from JessiseDB into EQualDB yet.
  - 2022/4/25
    - Stable configured.
