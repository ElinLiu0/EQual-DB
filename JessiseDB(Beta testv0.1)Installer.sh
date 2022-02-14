openword="""
Hi,Welcom to download this installing shell script of JessiseDB.\nI am so happy that you found this Project i mean its incredible,
\nbecause no one could be thinking that Python can make a Database wasn it?
\nBut now you see that.And if you wanna be one part of this project?
\nYou can view the project Github link as below to join this project:
\nhttps://github.com/RosterMouch/Jessise-DB
\nOh,dont forget to give a stars!Love you and enjoy
"""
echo -e $openword
echo """
Ok,after the condlence,lets figure out which platform you wanna use?
The GPU plaftform based on NVIDIA CUDA™ or the normal CPU one?
Press 0 for CPU option and 1 for GPU option.
"""
read workflow_ask
echo "Where you want to Save the JessiseDB?"
read prefix
if [ $workflow_ask = 0 ];
    then
        wget "https://github.com/RosterMouch/Jessise-DB/archive/refs/heads/beta_deving_0.1.zip" -P $prefix
        echo "Download of Jessise DB complete!try excute"
        cd $prefix
        unzip beta_deving_0.1.zip
        echo "Execution Complete!Enjoy your coding,Programmer!"
elif [ $workflow_ask = 1 ];
    then 
        wget "https://github.com/RosterMouch/Jessise-DB/archive/refs/heads/beta_gpu_deving_0.1.zip" -P $prefix
        echo "Download of Jessise DB complete!try excute"
        cd $prefix
        unzip beta_gpu_deving_0.1.zip
        echo "Execution Complete!Enjoy your coding,Programmer!"
fi