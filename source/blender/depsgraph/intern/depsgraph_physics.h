/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2019 Blender Foundation.
 * All rights reserved.
 */

/** \file
 * \ingroup depsgraph
 */

#pragma once

struct Collection;
struct ListBase;

namespace blender {
namespace deg {

struct Depsgraph;

ListBase *build_effector_relations(Depsgraph *graph, Collection *collection);
ListBase *build_collision_relations(Depsgraph *graph,
                                    Collection *collection,
                                    unsigned int modifier_type);
void clear_physics_relations(Depsgraph *graph);

}  // namespace deg
}  // namespace blender
