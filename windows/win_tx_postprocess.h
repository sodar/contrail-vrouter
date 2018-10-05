/*
 * win_tx_postprocess.h -- common defines and declarations used in Windows-specific code
 *
 * Copyright (c) 2018 Juniper Networks, Inc. All rights reserved.
 */
#ifndef __WIN_TX_POSTPROCESS_H__
#define __WIN_TX_POSTPROCESS_H__

#include <basetsd.h>

// Forward declaration.
struct vr_packet;

// Typedef for masking implementation specific handles.
typedef UINT_PTR PACKET_HANDLE;

PACKET_HANDLE WinTxPostprocess(struct vr_packet *VrPacket);

#endif
