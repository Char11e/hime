/*
 * Copyright (C) 2020 The HIME team, Taiwan
 * Copyright (C) 2009 Edward Der-Hua Liu, Hsin-Chu, Taiwan
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "hime-qt.h"

using namespace Qt;

/* Static variables */
static HIMEQt *client = NULL;


/* Bindings */
void hime_client_messenger_opened ()
{
    client->messenger_opened ();
}


void hime_client_messenger_closed ()
{
    client->messenger_closed ();
}


/* Implementations */
HIMEQt::HIMEQt (): socket_notifier (NULL) {
    client = this;
}


HIMEQt::~HIMEQt () {
    client = NULL;
}


void HIMEQt::messenger_opened ()
{
}


void HIMEQt::messenger_closed ()
{
}


void HIMEQt::handle_message ()
{
}

