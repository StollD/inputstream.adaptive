/*
 *  Copyright (C) 2023 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "SrvBroker.h"

#include "CompKodiProps.h"
#include "CompSettings.h"

using namespace ADP;

void CSrvBroker::Init(const std::map<std::string, std::string>& kodiProps)
{
  m_compKodiProps = std::make_shared<KODI_PROPS::CCompKodiProps>(kodiProps);
  m_compSettings = std::make_shared<SETTINGS::CCompSettings>();
}