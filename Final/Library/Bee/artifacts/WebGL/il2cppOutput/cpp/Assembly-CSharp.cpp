#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// CTL
struct CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// audio
struct audio_t4574C33E395F9A5079630B1F95271BDB43B622F6;

IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CTL
struct CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// audio
struct audio_t4574C33E395F9A5079630B1F95271BDB43B622F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single audio::mu
	float ___mu_4;
	// System.Single audio::a
	float ___a_5;
	// UnityEngine.AudioClip[] audio::musics
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___musics_6;
	// UnityEngine.AudioSource audio::am
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___am_7;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Int32

// System.Int32

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// CTL

// CTL

// audio

// audio
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void audio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audio_Start_m072616EF012249AD9C8769B67F8EE039EACEEF3E (audio_t4574C33E395F9A5079630B1F95271BDB43B622F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// am = GameObject.Find("Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___am_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___am_7), (void*)L_1);
		// a = am.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___am_7;
		float L_3;
		L_3 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_2, NULL);
		__this->___a_5 = L_3;
		// }
		return;
	}
}
// System.Void audio::Louder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audio_Louder_mFD05599B6BA3CDF1C190C2933A840A1832C86E24 (audio_t4574C33E395F9A5079630B1F95271BDB43B622F6* __this, const RuntimeMethod* method) 
{
	{
		// if (am.volume < 1 )
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___am_7;
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		if ((!(((float)L_1) < ((float)(1.0f)))))
		{
			goto IL_0088;
		}
	}
	{
		// if (1 - am.volume >= 0.1)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___am_7;
		float L_3;
		L_3 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_2, NULL);
		if ((!(((double)((double)((float)il2cpp_codegen_subtract((1.0f), L_3)))) >= ((double)(0.10000000000000001)))))
		{
			goto IL_0053;
		}
	}
	{
		// am.volume = (float) (am.volume + 0.1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___am_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___am_7;
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, ((float)((double)il2cpp_codegen_add(((double)L_6), (0.10000000000000001)))), NULL);
		goto IL_0088;
	}

IL_0053:
	{
		// mu = 1 - am.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___am_7;
		float L_8;
		L_8 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_7, NULL);
		__this->___mu_4 = ((float)il2cpp_codegen_subtract((1.0f), L_8));
		// am.volume = (float)(am.volume + mu);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___am_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___am_7;
		float L_11;
		L_11 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_10, NULL);
		float L_12 = __this->___mu_4;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, ((float)((float)il2cpp_codegen_add(L_11, L_12))), NULL);
	}

IL_0088:
	{
		// a = am.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___am_7;
		float L_14;
		L_14 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_13, NULL);
		__this->___a_5 = L_14;
		// }
		return;
	}
}
// System.Void audio::Quiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audio_Quiter_mB076A3C085CAAEE4818142EBA2A369CD9E590332 (audio_t4574C33E395F9A5079630B1F95271BDB43B622F6* __this, const RuntimeMethod* method) 
{
	{
		// if (am.volume > 0)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___am_7;
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// if (am.volume >= 0.1)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___am_7;
		float L_3;
		L_3 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_2, NULL);
		if ((!(((double)((double)L_3)) >= ((double)(0.10000000000000001)))))
		{
			goto IL_004d;
		}
	}
	{
		// am.volume = (float)(am.volume - 0.1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___am_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___am_7;
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, ((float)((double)il2cpp_codegen_subtract(((double)L_6), (0.10000000000000001)))), NULL);
		goto IL_005d;
	}

IL_004d:
	{
		// am.volume=0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___am_7;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_7, (0.0f), NULL);
	}

IL_005d:
	{
		// a = am.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___am_7;
		float L_9;
		L_9 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_8, NULL);
		__this->___a_5 = L_9;
		// }
		return;
	}
}
// System.Void audio::Silent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audio_Silent_mC41AA1A4F7FC1A73A8D5C49604F218A514DC16F3 (audio_t4574C33E395F9A5079630B1F95271BDB43B622F6* __this, const RuntimeMethod* method) 
{
	{
		// if (am.volume == 0)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___am_7;
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// am.volume = a;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___am_7;
		float L_3 = __this->___a_5;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, L_3, NULL);
		return;
	}

IL_0024:
	{
		// am.volume = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___am_7;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void audio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audio__ctor_m8F5ECEEF22FB6B2F6C7BCB132E5DE876CDAE8E02 (audio_t4574C33E395F9A5079630B1F95271BDB43B622F6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTL::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTL_Next_m5C88E0F8B4ED0E356C5D398071D1ECF468E57805 (CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void CTL::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTL_Quit_mB54C1660C3A1440387484151748CC0CE359F3AED (CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void CTL::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTL_Back_m5085D9098CFBFB802628BCC379F457CB6BE48081 (CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void CTL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTL__ctor_m9E71620442D551722D410AA9AF1A78D3AE339938 (CTL_t3DC2B0CBAF7865F644BB02F9F211474994503155* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
