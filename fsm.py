from igraph import *
g = Graph(directed = True)
g.add_vertices(3)
g.add_edge(0,0)
g.add_edge(0,1)
g.add_edge(1,1)
g.add_edge(1,2)
g.add_edge(2,2)
g.add_edge(2,0)
names = []
names.append('\n\n\nRed')
names.append('\n\n\nGreen')
names.append('\n\n\nYellow')
g.vs['name'] = names
layout = g.layout('kk')
visual_style = {}
visual_style['vertex_size'] = 20
visual_style['vertex_label'] = g.vs['name']
visual_style['edge_width'] = [2]
visual_style['layout'] = layout
visual_style['bbox'] = (300, 300)
visual_style['margin'] = 30
plot(g, **visual_style)
