//============================================================================
//
//   SSSS    tt          lll  lll       
//  SS  SS   tt           ll   ll        
//  SS     tttttt  eeee   ll   ll   aaaa 
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2000 by Jeff Miller
// Copyright (c) 2004 by Stephen Anthony
//
// See the file "license" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//
// $Id: GlobalData.hxx,v 1.2 2004-07-10 22:25:58 stephena Exp $
//============================================================================ 

#ifndef GLOBAL_DATA_HXX
#define GLOBAL_DATA_HXX

#include "pch.hxx"
#include "bspf.hxx"

class CConfigPage;
class Settings;

class CGlobalData
{
  friend CConfigPage;

  public:
    CGlobalData( HINSTANCE hInstance );
    ~CGlobalData( void );

    HINSTANCE ModuleInstance( void ) const
    {
      return myInstance;
    }

    Settings& settings( void )
    {
      return *mySettings;
    }

  private:
    Settings* mySettings;

    HINSTANCE myInstance;

    CGlobalData( const CGlobalData& );     // no implementation
    void operator=( const CGlobalData& );  // no implementation
};

#endif
