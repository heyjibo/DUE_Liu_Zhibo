using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audio : MonoBehaviour
{
    public float mu;
    public float a=0;
    public AudioClip[] musics;
    public UnityEngine.AudioSource am;
    void Start()
    {
        am = GameObject.Find("Player").GetComponent<AudioSource>();
        a = am.volume;
    }
    
    public void Louder()
    {
        if (am.volume < 1 )
        {
            if (1 - am.volume >= 0.1)
            {
                am.volume = (float) (am.volume + 0.1);
            }
            else
            {
                mu = 1 - am.volume;
                am.volume = (float)(am.volume + mu);
            }
        }
        a = am.volume;
    }
    public void Quiter()
    {
        if (am.volume > 0)
        {
            if (am.volume >= 0.1)
            {
                am.volume = (float)(am.volume - 0.1);
            }
            else
            {
                am.volume=0;
            }
        }
        a = am.volume;
    }
    public void Silent()
    {
        if (am.volume == 0)
        {
            am.volume = a;
        }
        else
        {
            am.volume = 0;
        }
    }
}
