//  $Id$
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2004 Steve Baker <sjbaker1@airmail.net>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#include "kart.hpp"
#include "constants.hpp"
#include "modes/world.hpp"

inline float sgnsq ( float x ) { return ( x < 0 ) ? -(x * x) : (x * x) ; }


void TrafficDriver::update (float dt)
{
    /* Steering algorithm */

    /* If moving left-to-right and on the left - or right to left
       and on the right - do nothing. */

    sgVec2 track_velocity ;
    sgSubVec2 ( track_velocity, m_curr_track_coords, m_last_track_coords ) ;

    if ( ( track_velocity [ 0 ] < 0.0f && m_curr_track_coords [ 0 ] > 0.0f ) ||
         ( track_velocity [ 0 ] > 0.0f && m_curr_track_coords [ 0 ] < 0.0f ) )
;//FIXME        m_velocity.hpr[0] = sgnsq(m_curr_track_coords[0])*3.0f ;
    else
//FIXME        m_velocity.hpr[0] = sgnsq(m_curr_track_coords[0])*12.0f ;

//FIXME    m_velocity.xyz[1]  = TRAFFIC_VELOCITY ;
//FIXME    m_velocity.xyz[2] -= RaceManager::getWorld()->getGravity()* dt ;

    if ( m_wheelie_angle != 0.0f )
        m_wheelie_angle = 0.0f ;

    Kart::update (dt) ;
}

//-----------------------------------------------------------------------------
void TrafficDriver::doLapCounting        () {}
//-----------------------------------------------------------------------------
void TrafficDriver::doZipperProcessing   () {}

