/*
 * Retroshare Gxs Support
 *
 * Copyright 2012-2013 by Robert Fernie.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License Version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "retroshare@lunamutt.com".
 *
 */


#ifndef _GXS_CIRCLES_CHOOSER_H
#define _GXS_CIRCLES_CHOOSER_H

#include <QComboBox>
#include <retroshare/rsgxscircles.h>


#define GXS_CIRCLE_CHOOSER_EXTERNAL	0x0001
#define GXS_CIRCLE_CHOOSER_PERSONAL	0x0002
#define GXS_CIRCLE_CHOOSER_ALLCIRCLES	0x0003  // OR of other two.

class GxsCircleChooser : public QComboBox
{
        Q_OBJECT

public:
	GxsCircleChooser(QWidget *parent = NULL);

	void loadCircles(uint32_t chooserFlags, const RsGxsCircleId &defaultId);
	bool getChosenCircle(RsGxsCircleId &id);

private:
	void loadGxsCircles();
	uint32_t mFlags;

	RsGxsCircleId mDefaultCircleId;
};

#endif

