// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
// Windows �w�b�_�[ �t�@�C��:
#include <windows.h>

#undef RtlMoveMemory
#undef RtlFillMemory
#undef RtlZeroMemory
EXTERN_C NTSYSAPI VOID NTAPI RtlMoveMemory (LPVOID UNALIGNED Dst, LPCVOID UNALIGNED Src, SIZE_T Length);
EXTERN_C NTSYSAPI VOID NTAPI RtlFillMemory (LPVOID UNALIGNED Dst, SIZE_T Length, BYTE Pattern);
EXTERN_C NTSYSAPI VOID NTAPI RtlZeroMemory (LPVOID UNALIGNED Dst, SIZE_T Length);

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
#include "MMDExport.h"